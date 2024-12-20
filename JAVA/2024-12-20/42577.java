//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.*;

public class Main {
    public static void main(String[] args) {
    }
}
    class Solution {
        public boolean solution(String[] phone_book) {
            boolean answer = false;

            Arrays.sort(phone_book);
            for (int i = 0; i < phone_book.length; i++)
            {
                if (phone_book[i].startsWith(phone_book[i]))
                {
                    return answer = false;
                }
            }
            return answer;
    }
}

// "12" -> "123"의 접두사
// phone_book의 문자 배열을 정렬 -> 정렬을 한 이유는 작은 문자열이 큰 문자열 안에 포함되기 때문에 정렬
// phone_book의 첫번째 값이 두번째 값으로 시작한다면 false 아닌 경우에 true