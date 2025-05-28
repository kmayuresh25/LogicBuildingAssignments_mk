import java.util.Scanner;
class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        char ch1 ='\0';
        char ch2 ='\0';

        for(i=1;i<=iRow;i++)
        {
            for(j=1,ch1='A',ch2='a';j<=iCol;j++,ch1++,ch2++)
            {
                if(i%2==0)
                {
                    System.out.print(ch2+"\t");
                    
                }
                else
                {
                    System.out.print(ch1+"\t");
                }

            }
            System.out.println();
        }

            
    }

}

class program2
{
  public static void main(String[] args)
 {
    int iVal1 = 0;
    int iVal2 = 0;

    Scanner sobj = new Scanner(System.in);
     
    System.out.println("Enter the number of rows");
    iVal1 = sobj.nextInt();

    System.out.println("Enter the numeber of columns");
    iVal2 =sobj.nextInt();
    
    Pattern pobj = new Pattern();
    pobj.Display(iVal1, iVal2);


  } 

}