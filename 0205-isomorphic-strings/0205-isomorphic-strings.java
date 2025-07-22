class Solution {
    public boolean func(String s, String t){

        Map<Character,Character>map=new HashMap<>();
        for(int i=0;i<s.length();i++){

            if(map.get(s.charAt(i))==null)
            map.put(s.charAt(i),t.charAt(i));
            else{
                if(map.get(s.charAt(i))!=t.charAt(i))
                return false;
            }
        }

        return true;
    }
    public boolean isIsomorphic(String s, String t) {
        return func(s,t)&&func(t,s);
    }
}