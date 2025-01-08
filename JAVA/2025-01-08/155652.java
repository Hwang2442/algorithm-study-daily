//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.*;

public class Main {
    public static void main(String[] args) {
    }
}
    class Solution {
        public String solution(String s, String skip, int index) {
            String answer = "";

            for (int i = 0; i< s.length(); i++)
            {
                char a = s.charAt(i);
                int count = 0;
                int snum = Character.getNumericValue(a);
                for (int j = 0; j < index; j++)
                {
                    a+=1;
                    if ((a) > 'z')
                    {
                        c-=26;
                    }
                    if (skip.contains(String.valueOf(a)))
                    {
                        j--;
                    }
                }
                answer += a;
            }
            return answer;
        }
    }
}