public class Solution
{
    public int MaxVowels(string s, int k)
    {
        int maxVowels = 0;
        int startVowels = 0;

        //Get vowels in first substring
        for (int i = 0; i < k; i++)
        {
            if ("aeiouAEIOU".Contains(s[i]))
                startVowels++;
        }
        maxVowels = startVowels;

        // Slide across, +1 if new character is vowel and old character is not, 0 if both are vowels, -1 if new character not vowel and old character was
        for (int i = k; i < s.Length; i++)
        {
            if ("aeiouAEIOU".Contains(s[i - k]))
                startVowels--;
            if ("aeiouAEIOU".Contains(s[i]))
                startVowels++;

            maxVowels = Math.Max(startVowels, maxVowels);
        }

        return maxVowels;
    }
}