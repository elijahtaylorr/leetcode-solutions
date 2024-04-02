public class Solution {
    public int MaxDistance(int[] colors) {
        int maxDist = 0;
        for(int i = 0; i < colors.Length; i++){
            for (int j = 0; j < colors.Length; j++){
                if(colors[i] != colors[j]){
                    maxDist = Math.Max(maxDist,Math.Abs(i-j));
                }
            }
        }
        return maxDist;
    }
}