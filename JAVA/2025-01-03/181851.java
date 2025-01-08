//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.*;

public class Main {
    public static void main(String[] args) {
    }
}
public int solution(int[] rank, boolean[] attendance) {
    int answer = 0;
    Map<Integer, Integer> ranker = new HashMap<>();
    for (int i = 0; i < rank.length; i++)
    {
        if (attendance[i])
        {
            ranker.put(rank[i], i);
        }
    }
    List<Integer> ranks = new ArrayList<>(ranker.keySet());
    answer = (10000 * ranker.get(ranks.get(0)) + (100 * ranker.get(ranks.get(1))) + ranker.get(ranks.get(2)));

    return answer;
}
}

