//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.*;

public class Main {
    public static void main(String[] args) {
    }
}
class Solution {
    public String solution(String code) {
        String answer = "";
        int mode = 0;
        for (int i  = 0; i < code.length(); i++)
        {
            char c = code.charAt(i);
            //1일때
            if (mode != 0)
            {
                //code[idx] == 1
                if (c == '1')
                {
                    mode = 0;
                }
                else
                {
                    if (i % 2 !=0) answer += c;
                }
            }
            else
            {
                if (c == '1')
                {
                    mode = 1;
                }
                else
                {
                    if (i % 2==0) answer += c;
                }
            }

        }

        if (answer.isEmpty()) answer = "EMPTY";
        return answer;
        }
    }

