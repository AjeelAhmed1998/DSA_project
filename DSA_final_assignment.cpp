//movie recommendation algorithm using undirected, adjacency matrix graphs.
#include <iostream>
#include <string>
#include <fstream>

using namespace std; 

struct movie{
	string name; 
	string genre[3];
	string actor[3];
	string director;
	int year_release; 
//similarity points	
	
};
movie* movieList[20];
movie* moviesWatched[3];
int similarityPoints[20][20];
void mentionAllMovies(){
	
	//show them with numbers so they can choose which they want to see; 
	
	for(int i = 0 ; i<19; i++){
		if(movieList[i]!=NULL){
			//cout<<"no movie available"<<endl;
			//break; 
			
			cout<<i; 
			cout<<" ";
			cout<<movieList[i]->name<<endl; 
			
		}
		
		else if (movieList==NULL){
			
			cout<<"no movie available"<<endl;
			break;
			
			//cout<<i+1;
			//cout<<" ";
			//cout<<movieList[i]->name<<endl;
			
		}
	}
	
	cout<<"which movie do you want to know more about ";
	int j; 
	cin>>j;
	  
	cout<<movieList[j]->name<<endl;
	cout<<movieList[j]->director<<endl;
	cout<<movieList[j]->year_release<<endl;
	cout<<movieList[j]->genre[0]<<endl;
	cout<<movieList[j]->genre[1]<<endl;
	cout<<movieList[j]->genre[2]<<endl;
	cout<<movieList[j]->actor[0]<<endl;
	cout<<movieList[j]->actor[1]<<endl;
	cout<<movieList[j]->actor[2]<<endl;
	}
void addMovies(){
	
	
	//adding some movies directly through the code 
	//1st movie
	movieList[0] = new movie; 
	movieList[0]->name = "Toy story";
	movieList[0]->director = "John Smith";
	movieList[0]->year_release = 1998; 
	movieList[0]->genre[0] = "Comedy";
	movieList[0]->genre[1] = "Children";
	movieList[0]->genre[2] = "Animated";
	movieList[0]->actor[0] = "Tom Hanks";
	movieList[0]->actor[1] = "Tom Cruise";
	movieList[0]->actor[2] = "John Travolta";
	
	
	//2nd movie
	movieList[1] = new movie; 
	movieList[1]->name = "The Prestige";
	movieList[1]->director = "John Smith";
	movieList[1]->year_release = 1998; 
	movieList[1]->genre[0] = "Comedy";
	movieList[1]->genre[1] = "Children";
	movieList[1]->genre[2] = "Animated";
	movieList[1]->actor[0] = "Tom Hanks";
	movieList[1]->actor[1] = "Tom Cruise";
	movieList[1]->actor[2] = "John Travolta";
	
	
	
	//3rd movie
	movieList[2] = new movie; 
	movieList[2]->name = "Shutter Island";
	movieList[2]->director = "John Smith";
	movieList[2]->year_release = 1998; 
	movieList[2]->genre[0] = "Comedy";
	movieList[2]->genre[1] = "Children";
	movieList[2]->genre[2] = "Animated";
	movieList[2]->actor[0] = "Tom Hanks";
	movieList[2]->actor[1] = "Tom Cruise";
	movieList[2]->actor[2] = "John Travolta";
	
	
	
	//4th movie
	movieList[3] = new movie; 
	movieList[3]->name = "Mission Impossible";
	movieList[3]->director = "John Smith";
	movieList[3]->year_release = 1998; 
	movieList[3]->genre[0] = "Comedy";
	movieList[3]->genre[1] = "Children";
	movieList[3]->genre[2] = "Animated";
	movieList[3]->actor[0] = "Tom Hanks";
	movieList[3]->actor[1] = "Tom Cruise";
	movieList[3]->actor[2] = "John Travolta";
	
	
	
	//5th movie
	movieList[4] = new movie; 
	movieList[4]->name = "Shrek";
	movieList[4]->director = "John Smith";
	movieList[4]->year_release = 1998; 
	movieList[4]->genre[0] = "Comedy";
	movieList[4]->genre[1] = "Children";
	movieList[4]->genre[2] = "Animated";
	movieList[4]->actor[0] = "Tom Hanks";
	movieList[4]->actor[1] = "Tom Cruise";
	movieList[4]->actor[2] = "John Travolta";
	
	
	
	//6th movie
	movieList[5] = new movie; 
	movieList[5]->name = "The Zodiac Killer";
	movieList[5]->director = "John Smith";
	movieList[5]->year_release = 1998; 
	movieList[5]->genre[0] = "Comedy";
	movieList[5]->genre[1] = "Children";
	movieList[5]->genre[2] = "Animated";
	movieList[5]->actor[0] = "Tom Hanks";
	movieList[5]->actor[1] = "Tom Cruise";
	movieList[5]->actor[2] = "John Travolta";
	
	
	//7th movie 
	movieList[6] = new movie; 
	movieList[6]->name = "Se7en";
	movieList[6]->director = "John Smith";
	movieList[6]->year_release = 1998; 
	movieList[6]->genre[0] = "Comedy";
	movieList[6]->genre[1] = "Children";
	movieList[6]->genre[2] = "Animated";
	movieList[6]->actor[0] = "Tom Hanks";
	movieList[6]->actor[1] = "Tom Cruise";
	movieList[6]->actor[2] = "John Travolta";
	
	
	
	//8th movie
	movieList[7] = new movie; 
	movieList[7]->name = "IT 2";
	movieList[7]->director = "John Smith";
	movieList[7]->year_release = 1998; 
	movieList[7]->genre[0] = "Comedy";
	movieList[7]->genre[1] = "Children";
	movieList[7]->genre[2] = "Animated";
	movieList[7]->actor[0] = "Tom Hanks";
	movieList[7]->actor[1] = "Tom Cruise";
	movieList[7]->actor[2] = "John Travolta";
	
	
	
	//9th movie
	movieList[8] = new movie; 
	movieList[8]->name = "Airplane";
	movieList[8]->director = "John Smith";
	movieList[8]->year_release = 1998; 
	movieList[8]->genre[0] = "Comedy";
	movieList[8]->genre[1] = "Children";
	movieList[8]->genre[2] = "Animated";
	movieList[8]->actor[0] = "Tom Hanks";
	movieList[8]->actor[1] = "Tom Cruise";
	movieList[8]->actor[2] = "John Travolta";
	
	
	
		
	//10th movie
	movieList[9] = new movie; 
	movieList[9]->name = "Airplane";
	movieList[9]->director = "John Smith";
	movieList[9]->year_release = 1998; 
	movieList[9]->genre[0] = "Comedy";
	movieList[9]->genre[1] = "Children";
	movieList[9]->genre[2] = "Animated";
	movieList[9]->actor[0] = "Tom Hanks";
	movieList[9]->actor[1] = "Tom Cruise";
	movieList[9]->actor[2] = "John Travolta";
	
	
	
		
	//11th movie
	movieList[10] = new movie; 
	movieList[10]->name = "Airplane";
	movieList[10]->director = "John Smith";
	movieList[10]->year_release = 1998; 
	movieList[10]->genre[0] = "Comedy";
	movieList[10]->genre[1] = "Children";
	movieList[10]->genre[2] = "Animated";
	movieList[10]->actor[0] = "Tom Hanks";
	movieList[10]->actor[1] = "Tom Cruise";
	movieList[10]->actor[2] = "John Travolta";
	
		
	//12th movie
	movieList[11] = new movie; 
	movieList[11]->name = "Airplane";
	movieList[11]->director = "John Smith";
	movieList[11]->year_release = 1998; 
	movieList[11]->genre[0] = "Comedy";
	movieList[11]->genre[1] = "Children";
	movieList[11]->genre[2] = "Animated";
	movieList[11]->actor[0] = "Tom Hanks";
	movieList[11]->actor[1] = "Tom Cruise";
	movieList[11]->actor[2] = "John Travolta";
	
		
	//13th movie
	movieList[12] = new movie; 
	movieList[12]->name = "Airplane";
	movieList[12]->director = "John Smith";
	movieList[12]->year_release = 1998; 
	movieList[12]->genre[0] = "Comedy";
	movieList[12]->genre[1] = "Children";
	movieList[12]->genre[2] = "Animated";
	movieList[12]->actor[0] = "Tom Hanks";
	movieList[12]->actor[1] = "Tom Cruise";
	movieList[12]->actor[2] = "John Travolta";
	
		
	//14th movie
	movieList[13] = new movie; 
	movieList[13]->name = "Airplane";
	movieList[13]->director = "John Smith";
	movieList[13]->year_release = 1998; 
	movieList[13]->genre[0] = "Comedy";
	movieList[13]->genre[1] = "Children";
	movieList[13]->genre[2] = "Animated";
	movieList[13]->actor[0] = "Tom Hanks";
	movieList[13]->actor[1] = "Tom Cruise";
	movieList[13]->actor[2] = "John Travolta";
	
		
	//15th movie
	movieList[14] = new movie; 
	movieList[14]->name = "Airplane";
	movieList[14]->director = "John Smith";
	movieList[14]->year_release = 1998; 
	movieList[14]->genre[0] = "Comedy";
	movieList[14]->genre[1] = "Children";
	movieList[14]->genre[2] = "Animated";
	movieList[14]->actor[0] = "Tom Hanks";
	movieList[14]->actor[1] = "Tom Cruise";
	movieList[14]->actor[2] = "John Travolta";
	
		
	//16th movie
	movieList[15]= new movie; 
	movieList[15]->name = "Airplane";
	movieList[15]->director = "John Smith";
	movieList[15]->year_release = 1998; 
	movieList[15]->genre[0] = "Comedy";
	movieList[15]->genre[1] = "Children";
	movieList[15]->genre[2] = "Animated";
	movieList[15]->actor[0] = "Tom Hanks";
	movieList[15]->actor[1] = "Tom Cruise";
	movieList[15]->actor[2] = "John Travolta";
	
	
		
	//17th movie
	movieList[16] = new movie; 
	movieList[16]->name = "Airplane";
	movieList[16]->director = "John Smith";
	movieList[16]->year_release = 1998; 
	movieList[16]->genre[0] = "Comedy";
	movieList[16]->genre[1] = "Children";
	movieList[16]->genre[2] = "Animated";
	movieList[16]->actor[0] = "Tom Hanks";
	movieList[16]->actor[1] = "Tom Cruise";
	movieList[16]->actor[2] = "John Travolta";
	
	
		
	//18th movie
	movieList[17] = new movie; 
	movieList[17]->name = "Airplane";
	movieList[17]->director = "John Smith";
	movieList[17]->year_release = 1998; 
	movieList[17]->genre[0] = "Comedy";
	movieList[17]->genre[1] = "Children";
	movieList[17]->genre[2] = "Animated";
	movieList[17]->actor[0] = "Tom Hanks";
	movieList[17]->actor[1] = "Tom Cruise";
	movieList[17]->actor[2] = "John Travolta";
	
		
	//19th movie
	movieList[18] = new movie; 
	movieList[18]->name = "Airplane";
	movieList[18]->director = "John Smith";
	movieList[18]->year_release = 1998; 
	movieList[18]->genre[0] = "Comedy";
	movieList[18]->genre[1] = "Children";
	movieList[18]->genre[2] = "Animated";
	movieList[18]->actor[0] = "Tom Hanks";
	movieList[18]->actor[1] = "Tom Cruise";
	movieList[18]->actor[2] = "John Travolta";
	
	
		
	//20th movie
	movieList[19] = new movie; 
	movieList[19]->name = "Airplane";
	movieList[19]->director = "John Smith";
	movieList[19]->year_release = 1998; 
	movieList[19]->genre[0] = "Comedy";
	movieList[19]->genre[1] = "Children";
	movieList[19]->genre[2] = "Animated";
	movieList[19]->actor[0] = "Tom Hanks";
	movieList[19]->actor[1] = "Tom Cruise";
	movieList[19]->actor[2] = "John Travolta";
	
	
	
	/*
	if(movieList[19] != NULL){
		cout<<"movie list is full";
		
	}
	
	else{
		
		
		
		int i = 0; 
		while(movieList[i]!=NULL){
			i++;
		}
		
		movieList[i] = new movie;
		
		cout<<"enter name";
		string name; 
		cin>>name ; 
		movieList[i]->name = name; 
		
		//genres
		for(int j = 0 ; j<3; j++){
			cout<<"enter genres ";
			string genre; 
			cin>>genre;
			movieList[i]->genre[j] = genre; 
		}
		
		//actors
		for(int k = 0 ; k<3; k++){
			cout<<"enter actors starring ";
			string actor; 
			cin>>actor;
			movieList[i]->actor[k] =actor; 
		}
		
		//director
		cout<<"enter director ";
		string director ; 
		cin>>director ; 
		movieList[i]->director = director; 
		
		//year release 
		cout<<"enter year the movie was released ";
		int year ; 
		cin>> year; 
		movieList[i]->year_release = year ; 
		
		
		 
		
		
		 
	}
	*/
	
}



void watchedMovie(){
	
	
	//show them with numbers so they can choose which they want to see; 
	int k =0 ; 	
	int input[3] ;
	//int y = 0 ; 
	while(movieList[k]!=NULL){
			cout<<k; 
			cout<<" ";
			cout<<movieList[k]->name<<endl; 
			k++;
	}
	
	
	cout<<"stop 1";
	
	
	
	for(int p = 0; p <3; p++){
		cout<<"which movie have you watched";
		int input[3]; 
		cin>>input[p] ; 
		for(int y = 0 ; y<3 ; y++){
				moviesWatched[y]=movieList[input[p]-1];
			}
	}
	
	
	cout<<"stop 2";
	
	
	for(int e = 0 ; e<3; e++){
		
		for(int r = 0 ; r<20; r++){
			//now ill compare moviesWatched[e] with every movieList[r]
			
			//granting points to the similarity boxes
			for(int q= 0 ; q<3; q++){
				
				if(moviesWatched[e]->genre[q] == movieList[r]->genre[0] || moviesWatched[e]->genre[q] == movieList[r]->genre[1] || moviesWatched[e]->genre[q] == movieList[r]->genre[2] ){
					similarityPoints[e][r] = similarityPoints[e][r] + 1; 
				}
			}
			
			
		}
	}
	
	
	cout<<"stop 3 ";
	
	
	//now compare the whole row and see which one has the highest similarity points ; 
	
	
	int highest_1 ;
	int highest_2 ; 
	int highest_3 ; 
	//int highest; 
	
	
	for(int g = 1; g<=20; g++){
		similarityPoints[g][g]= 0; 
	}
	
	//for 1st movie; 
	int movieNumber ;
	for(int w= 0 ; w< 20 ; w++){
	/*	if(movieList[input[0]][w]>highest_1){
			highest_1 = movieList[input[0]][w];
			
		}*/
		
		if(similarityPoints[input[0]][w]>highest_1){
			movieNumber = w  ; 
			highest_1 = similarityPoints[input[0]][w];
		}
		
	}
	
	
	cout<<"stop 4 ";
	//for 2nd movie; 
	int movieNumber2 ;
	for(int f= 0 ; f< 20 ; f++){
	/*	if(movieList[input[0]][w]>highest_1){
			highest_1 = movieList[input[0]][w];
			
		}*/
		
		cout<<"in looooop";
		
		if(similarityPoints[input[1]][f]>highest_2){
			movieNumber2 = f  ; 
			highest_2 = similarityPoints[input[1]][f];
		}	
}

cout<<"stop 5";
	
	//for 3rd movie; 
	
	/*
	int movieNumber3 ;
	for(int s= 0 ; s< 20 ; s++){
	
		cout<<"in loop";
		if(similarityPoints[input[2]][s]>highest_3){
			movieNumber3 = s  ; 
			highest_3 = similarityPoints[input[2]][s];
		}	
		
		
	}
	*/
	
	
	
	cout<<"stop 6";
	if(highest_1>highest_2 && highest_1>highest_3){
		cout<<movieList[movieNumber]->name;
	}
	
	else if(highest_2>highest_1 && highest_2>highest_3){
		cout<<movieList[movieNumber2]->name;
		
	}
	
	
//	else if(highest_3>highest_1 && highest_3>highest_2){
//		cout<<movieList[movieNumber3]->name;
		
//	}
	
	
		
		//I have to find at which w the number is the highest; 
		
		/*
		if(similarityPoints[input[1]][w]>highest_2){
			highest_2 = similarityPoints[input[1]][w];
		}
		if(similarityPoints[input[2]][w]>highest_3){
			highest_3 = similarityPoints[input[2]][w];
		}*/
		
		
		/*
		if(movieList[input[1]][w]>highest_2){
			highest_2 = movieList[input[1][w];
		}
		
		if(movieList[input[2]][w]>highest_3){
			highest_3 = movieList[input[2]][w];
		}
		*/
	}
	//i have to find out where the highest number came from 
	




int main(){
	
	addMovies(); 
	
	
	//recommendMovie();
	
	
	
	//mentionAllMovies();
	
	
	watchedMovie();
	
	
	return 0; 
}
