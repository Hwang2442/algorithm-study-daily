import java.util.*;

public class Main {
    public static void main(String[] args) {
    }
}
class solution {
    public int solution(int[] priorities, int location) {
        int answer = 0;
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());

        for (int num : priorities) {
            pq.add(num);
        }
        while (!pq.isEmpty()) {
            for (int i = 0; i < priorities.length; i++) {
                if (priorities[i] == pq.peek()) {
                    pq.poll();
                    answer++;
                    if (i == location)
                        return answer;
                }
            }
        }
        return answer;
    }
}

// 처음 문제를 접근했을 때 Queue를 사용하지 않고 문제를 풀려고 했다. 하지만 순서를 보장하지 않아서 테스트케이스를 통과하지 못했다
// 그래서 문제 자체가 Queue/Stack 문제여서 Queue를 이용해 문제 해결
