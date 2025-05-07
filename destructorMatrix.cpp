#include <iostream>
using namespace std;


class Matrix {

private:
	
	int height;
	int width;
	int depth;
	int ***matrix;

	Matrix(int height_in, int width_in, int depth_in) {

		height = height_in;
		width = width_in;
		depth = depth_in;

		matrix = new int**[height];
		
		for(int h = 0; h < height; ++h) {
		
			matrix[h] = new int*[width];

			for(int w = 0; w < width; ++w) {
				matrix[h][w] = new int[depth];
			}	
		}
	}

	~Matrix() {
	
		for(int h = 0; h < height; ++h) {
			for(int w = 0; w < width; ++w) {
				delete[] matrix[h][w];
			}
			delete[] matrix[h];
		}
		delete[] matrix;
	}

	~Matrix() {
		for( [A] ) {
			for( [B] ) {
				delete[] [C];
			}
			delete[] [D];
		}
		delete[] [E];
	}
	
};