import java.util.Scanner;
class Pattern
{
    public void Display(int iRow , int iCol)
    { 
        int i =0 ;
        int j = 0;
        
        for(i = 1;i<=iRow;i++)
        {
           for(j=1;j<=iCol;j++)
           {
              if((i%2)!=0)
              {
                System.out.print(j+"\t");
              }
              else if(i%2==0) 
              {
                 System.out.print(-j +"\t");
              }
              
           }

           System.out.println();
        }
       
    }

}


class program4
{
    public static void main(String[] args) 
    {
       int iVal1 = 0;
       int iVal2 = 0; 

       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number of Rows");
        iVal1 = sobj.nextInt();

        System.out.println ("Enter the number of Cols");
        iVal2 = sobj.nextInt();

        Pattern pobj = new Pattern();
         pobj.Display(iVal1, iVal2);
        
    }
}