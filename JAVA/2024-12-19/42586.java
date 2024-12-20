//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.*;

public class Main {
    public static void main(String[] args) {
    }
}
    class Solution {
        public int[] solution(int[] progresses, int[] speeds) {

            Stack<Integer> progress = new Stack<>();
            Map<Integer, Integer> answer = new LinkedHashMap<>();
            for (int i = 0; i < progresses.length; i++) {
                int remain = 100 - progresses[i];
                int speed = speeds[i];
                int result = (remain % speed == 0) ? (remain / speed) : (remain / speed) + 1;
                if (!progress.isEmpty()) {
                    if (progress.peek() < result) //stack이 비어있지 않고 들어온 마지막 값이 새로 넣을 값보다 작으면
                    {
                        progress.pop();
                        progress.push(result);
                        answer.put(result, answer.getOrDefault(result, 0) + 1);
                    } else {
                        answer.put(progress.peek(), answer.getOrDefault(progress.peek(), 0) + 1);
                    }
                } else {
                    progress.push(result);
                    answer.put(result, answer.getOrDefault(result, 0) + 1);
                }

            }

            return answer.values().stream().mapToInt(i -> i).toArray();
    }
}