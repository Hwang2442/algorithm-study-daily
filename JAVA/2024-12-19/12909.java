//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.*;

public class Main {
    public static void main(String[] args) {
    }
}
    class Solution {
        boolean solution(String s) {
            boolean answer = true;

            Stack<Character> s_stack = new Stack<>();


            for (int i = 0; i < s.length(); i++)
            {
                char sc = s.charAt(i);
                if (!s_stack.isEmpty() && s_stack.peek() == '(' && sc == ')')
                {
                    s_stack.pop();
                    continue;
                }
                s_stack.push(sc);
            }

            System.out.println(s_stack);
            if (s_stack.isEmpty()) answer = true;
            else answer = false;

            return answer;
    }
}
