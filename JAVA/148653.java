public class Main {
    public static void main(String[] args) {
    }
}

class solution
{
    public int solution(int storey)
    {

        int result = 0; 
        int carry = 0;
    
  
        String[] digits = Integer.toString(storey).split("");
    

        for (int i = digits.length - 1; i >= 0; i--) {
            int digit = Integer.parseInt(digits[i]); 
            digit += carry; 
    
            if (digit > 5 || (digit == 5 && i > 0 && Integer.parseInt(digits[i - 1]) >= 5)) {
                result += 10 - digit;
                carry = 1;
            }
            else
            {
                result += digit;
                carry = 0; 
            }
        }
    

        if (carry > 0) {
            result += carry;
        }
    
        return result;
    }
}
