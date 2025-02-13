package Java;

import java.util.Scanner;

public class DivideNumbers 
{
    // User-defined function to perform division
    public static double divide(double num1, double num2) 
    {
        if (num2 == 0) 
        {
            throw new ArithmeticException("Error: Division by zero is not allowed.");
        }
        return num1 / num2;
    }

    public static void main(String[] args) 
    {
        @SuppressWarnings("resource")
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter the first number
        System.out.print("Enter the first number: ");
        double num1 = scanner.nextDouble();

        // Prompt the user to enter the second number
        System.out.print("Enter the second number: ");
        double num2 = scanner.nextDouble();

         try 
         {
             // Call the user-defined function to perform division
             double result = divide(num1, num2);
             System.out.println("The result of dividing " + num1 + " by " + num2 + " is: " + result);
        } 
        catch (ArithmeticException e) 
        {
               // Handle division by zero error
               System.out.println(e.getMessage());
        }
        
    }
}
