
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int rows = matrix.size();
	int columns = matrix[0].size();
	bool colzero = false;

	for(int i =0; i < rows; i++){
		for(int j =0; j < columns; j++) {
			if(matrix[i][j] == 0){
				matrix[i][0] = 0;
				if(j != 0){
					matrix[0][j] = 0;
				}else{
					colzero = true;
				}
			}
		}
	}
	for(int i = 1; i < rows; i++) {
		for(int j = 1; j < columns; j++){
			if(matrix[i][j] != 0) {
				if (matrix[0][j] == 0 || matrix[i][0] == 0) {
					matrix[i][j] = 0;
				}
			}
		}
	}
	if(matrix[0][0] == 0){
		for(int i = 0; i < columns; i++) {
			matrix[0][i] = 0;
		}
	}
	if(colzero){
		for(int i = 0; i < rows; i++) {
			matrix[i][0] = 0;
		}
	}
	
}