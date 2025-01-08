//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.*;

public class Main {
    public static void main(String[] args) {
    }
}
public int[] solution(String s) {
    int[] answer = answer[s.length()];
    answer[0] = -1;

    for (int i = 1; i < s.length(); i++) {
        for (int j = j; j >=0; j--){
            if (s.charAt(j) == s.charAt(i) && answer[i] == 0) {
                answer[i] = j-i;
            }
        }
        if (answer[i] == 0) answer[i] = -1;

    }

    return answer;
}
}

