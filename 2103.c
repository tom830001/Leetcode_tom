int countPoints(char * rings){
	int i,arr[10][3],answer = 0;
	memset(arr,0,sizeof(arr));
	for(i = 0; i < strlen(rings); i = i + 2){
		if(rings[i] == 'R'){
			arr[rings[i+1] - 48][0] = 1;
		}
		else if(rings[i] == 'G'){
			arr[rings[i+1] - 48][1] = 1;
		}
		else if(rings[i] == 'B'){
			arr[rings[i+1] - 48][2] = 1;
		}
	}
	for(i = 0; i < 10; i++){
		if(arr[i][0] == 1 && arr[i][1] == 1 && arr[i][2] == 1)
			answer++;
	}
	return answer;
}
