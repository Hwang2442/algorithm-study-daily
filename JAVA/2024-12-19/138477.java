//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.*;

public class Main {
    public static void main(String[] args) {
    }

    class Solution {

        public int[] solution(int k, int[] score) {

            int[] answer = new int[score.length];
            List<Integer> result = new ArrayList<>();

            for (int i = 0; i < score.length; i++)
            {
                result.add(socre[i]);

                if (result.size() > k)
                {
                    // 10 100 20  150
                    result.remove(Collections.min(result));
                }
                answer[i] = Collections.min(result);
            }
            return answer;
        }
    }

    //문제를 보면 Queue의 구조로 되어 있어 사용하려 햇지만, 값을 넣는 과정에서 작은 값을 먼저 넣어야 하기 때문에 이 부분을 어떻게 넣어줄지에 대한 의문
// 그래서 List를 이용해서 값을 넣어주면서 k보다 List의 길이가 길다면 이때 제일 작은 값을 제거.