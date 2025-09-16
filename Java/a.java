import java.util.*;
class a
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
         System.out.print("Enter value of n - ");
         int n =sc.nextInt();
         sc.close();
         int k=1;
         for(int i=1;i<=n;i++){
            if(i%2==0){
                k+=n-1;
                for(int j=1;j<=n;j++){
                    System.out.print(k--+"\t");
                }
                k+=n+1;
            }
            else{
                for(int j=1;j<=n;j++){
                    System.out.print(k+++"\t");
                }
            }
            System.out.println();
         }
    }
}
