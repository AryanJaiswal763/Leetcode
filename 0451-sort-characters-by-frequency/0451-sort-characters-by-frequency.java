class Solution {
    class Pair{
        char ch;
        int count;

        Pair(char ch, int count){
          this.ch=ch;
          this.count=count;
        }
    }
    public String frequencySort(String s) {

        int[] arr=new int[125];
        for(char ch: s.toCharArray()){
           arr[ch]++;
        }

       List<Pair>list=new ArrayList<>();

       for(int i=48;i<=122;i++){
         if(arr[i]>0)
         list.add(new Pair((char)i,arr[i]));
       }

       Collections.sort(list, new Comparator<Pair>(){
         public int compare(Pair a, Pair b){
            return b.count-a.count;
         }
       });

       StringBuilder sb=new StringBuilder();

       for(Pair num:list){
         int c=num.count;
         while(c>0){
            sb.append(num.ch);
            c--;
         }
       }

       return sb.toString();
    }
}