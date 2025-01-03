public class Main {
    public static void main(String[] args) {
    }
}

class solution
{
    public int solution(int[] number)
    {
        int answer = 0;
        int result = 0;
        for (int i = 0; i < number.length; i++)
        {
            for (int j = i+1; j < number.length; j++)
            {
                for (int k = j+1; k < number.length; k++)
                {
                    answer += number[i] + number[j] + number[k];
                    if (answer == 0) result += 1;
                    else answer  = 0;
                }
            }
        }
        return result;
    }
}

// 문제가 number의 배열에서 총 3개의 값을 + 했을 때 0이 되어야 하기 때문에 3중 for문 사용
// 하지만 제한 사항에서 number의 길이가 최대 13이기 때문에 가능
// 다른 방법도 찾아보는 것이 중요