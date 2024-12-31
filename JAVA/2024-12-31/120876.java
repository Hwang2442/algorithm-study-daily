public class Main {
  public static void main(String[] args) {
    }
}

class solution
{
  public int solution(int[][] lines) {
    {
      HashMap<Integer, Integer> map = new HashMap<>();
      for (int[] line : lines)
      {
        for (int i = line[0]; i < line[1]; i++)
        {
          map.put(i, map.getOrDefault(i, 0) + 1);
        }
      }
      int result = 0;
      for (int n : map.values()) {
        if (n > 1)
        {
          result++;
        }
      }
      return result;
    }
}
// 이 문제는 사실 시작하지 못하고 찾아서 가져온 코드이다.
// 문제는 이해했지만, 겹치는 부분을 어떻게 계산해줘서 해야할지 감이 잡히지 않았기 때문에 다시 풀어봐야할 문제이다.
