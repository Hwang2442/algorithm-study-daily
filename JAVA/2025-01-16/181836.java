//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.*;

public class Main {
    public static void main(String[] args) {
    }
}
class Solution {
    public String[] solution(String[] picture, int k) {
        String[] answer = new String[picture.length * k];
        int num = 0;
        for (int i = 0; i < picture.length; i++)
        {
            String result = "";
            for (int j = 0; j < picture[i].length(); j++)
            {
                char c = picture[i].charAt(j);

                for (int l = 0; l < k; l++) {
                    result += c;
                }
            }

            for (int j = 0; j < k; j ++)
            {
                answer[num] = result;
                num++;
            }
        }
        return answer;
        }
    }

