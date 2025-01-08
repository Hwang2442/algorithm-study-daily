//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.*;

public class Main {
    public static void main(String[] args) {
    }
}
    class Solution {
        public int solution(int[] common) {
            int answer = 0;
            int a = common[1] - common[0];
            int b = common[2] - common[1];

            if (a == b)
            {
                answer = common[common.length-1] + a;
            }
            else
            {
                answer = common[common.length-1] * (b/a);
            }
            return answer;
        }
    }
}