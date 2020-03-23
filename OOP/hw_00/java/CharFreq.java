import java.io.*;

public class CharFreq{
	public static void main(String[] args) {
			char[] ch = new char[256];
			int[] cnt = new int[256];
			int num = 0;

			for(int i=0; i<args.length; i++){
				char[] s = args[i].toCharArray();
				for(int j=0; j<s.length; j++){
					//System.out.println(s[j]);
					char c = s[j];
					int checkPoint = 1;
					for(int k=0; k<num; k++){
						if(ch[k] == c){
							cnt[k] = cnt[k] + 1;
							checkPoint = 0;
							break;
						}
					}
					if(checkPoint == 1){
						ch[num] = c;
						cnt[num] = 1;
						num++;
					}
				}
			}
			for(int i=0; i<num; i++){
				System.out.println(ch[i] + ":" + cnt[i]);
			}
    }
}
