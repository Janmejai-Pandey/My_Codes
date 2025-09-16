import pygame

pygame.init()
class Players(pygame.sprite.Sprite):
    def __init__(self,player):
        super().__init__()
        self.jump_allowed=True
        self.image=pygame.image.load('Character 1.png').convert_alpha()

        self.image=pygame.transform.scale(self.image, (200,200))
        if player=='1':
            self.rect=self.image.get_rect(topleft = (30,545))
            self.start=False

        else:
            self.rect=self.image.get_rect(topleft = (1355,545))
            self.image=pygame.transform.flip(self.image,True,False)

        self.player=player
        self.floor=self.rect.y
        self.gravity=0
        self.keys=pygame.key.get_pressed()
        self.count=0
        self.dive_allowed=True
        self.walk_allowed=True
        self.timer=0
        self.S=False
        self.high_shot=False
        self.low_shot=False
        self.hit_allowed=True
        self.shot_timer=0
        self.reset=True
        self.score=0
    
    def movement(self):
        self.keys=pygame.key.get_pressed()

        if self.walk_allowed:        
            if self.player=='1' and self.jump_allowed:
                if self.keys[pygame.K_a] and self.rect.x>-10:
                    self.rect.x-=5
                if self.keys[pygame.K_d] and self.rect.x<600:
                    self.rect.x+=5
                    
            if self.player=='2' and self.jump_allowed:
                if self.keys[pygame.K_LEFT] and self.rect.x>800:
                    self.rect.x-=5
                if self.keys[pygame.K_RIGHT] and self.rect.x<1415:              
                    self.rect.x+=5
    
    def Jump(self):
        self.keys=pygame.key.get_pressed()
        if not self.S:
            if self.jump_allowed:
                if self.keys[pygame.K_w] and self.player=='1':
                    self.jump_allowed=False
                    self.count=10
                if self.keys[pygame.K_UP] and self.player=='2':
                    self.jump_allowed=False
                    self.count=10
            if self.count:
                self.rect.y-=10
                self.count-=1
            
            if not self.jump_allowed and not self.count:
                self.rect.y+=int(self.gravity)
                self.gravity+=0.2
            
                if self.rect.y>545:
                    self.rect.y=545
                    self.gravity=1
                    self.jump_allowed=True

    def Dive(self):
        self.keys=pygame.key.get_pressed()

        if self.dive_allowed:
            if self.keys[pygame.K_s] and self.player=='1' and self.rect.x<600 and self.jump_allowed:
                self.rect.x+=150
                if self.rect.x>600:
                    self.rect.x=600
                self.S=True

            if self.keys[pygame.K_DOWN] and self.player=='2' and self.rect.x>800 and self.jump_allowed:
                self.rect.x-=150
                if self.rect.x<800:
                    self.rect.x=800
                self.S=True
    
    def Stop(self):
        self.jump_allowed=False
        self.walk_allowed=False
        self.dive_allowed=False
        
        if int(self.timer)!=7:
            self.timer+=0.1

        if int(self.timer)==7:
            self.jump_allowed=True
            self.walk_allowed=True
            self.dive_allowed=True
            self.timer=0
            self.S=False

    def Shot(self):
        self.keys=pygame.key.get_pressed()

        if self.hit_allowed:
            if self.player=='2':
                if self.keys[pygame.K_RALT]:
                    self.high_shot=True
                if self.keys[pygame.K_RCTRL]:
                    self.low_shot=True

            if self.player=='1':
                if self.keys[pygame.K_LSHIFT]:
                    self.high_shot=True
                    self.start=True

                if self.keys[pygame.K_SPACE]:
                    self.low_shot=True
                    self.start=True

    def Shot_Timer(self):
            self.hit_allowed=False
            
            if int(self.timer)!=3:
                self.timer+=0.1
            
            if int(self.timer)==3:
                self.high_shot=False
                self.low_shot=False
                self.hit_allowed=True
                self.timer=0

    def Reset(self):
        self.gravity=0
        if self.player=='1':
            self.rect.topleft=(30,545)
            self.start=False
        else:
            self.rect.topleft=(1355,545)
        
        self.dive_allowed=True
        self.walk_allowed=True
        self.jump_allowed=True
        self.hit_allowed=True


    def update(self):
        self.movement()
        self.Jump()
        self.Dive()
        self.Shot()

        if self.S:
                self.Stop()
        
        if self.high_shot or self.low_shot:
            self.Shot_Timer()