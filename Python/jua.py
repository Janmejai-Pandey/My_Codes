no_of_players = int(input("Enter number of players : "))
players = []
for i in range(no_of_players):
    name = input("Enter player " + str(i + 1) + " name : ")
    players.append(name)
print("Players are : ", players)
no_of_rounds = int(input("\nEnter number of rounds : "))
scores = {}
for player in players:
    scores[player] = 0
print("\n")
for i in range(no_of_rounds):
    print("\nRound ", i + 1)
    for player in players:
        score = int(input("Enter score of " + player + " : "))
        scores[player] += score
print("Final Scores : ")
for player in players:
    print(player, " : ", scores[player])

min_score = min(scores.values())
winners = [player for player, score in scores.items() if score == min_score]
if len(winners) == 1:
    print("Winner is ", winners[0], " with score ", min_score)