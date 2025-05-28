import java.util.Scanner;
class Pattern
{
    public void Display(int iRow , int iCol)
    { 
        int i =0 ;
        int j = 0;
        int iCnt = 0;
        
        for(i = 1;i<=iRow;i++)
        {
           for(j=1,iCnt=i;j<=iCol;j++,iCnt++)
           {
              
                System.out.print(iCnt+"\t");
         
              
           }

           System.out.println();
        }
       
    }

}


class program5
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