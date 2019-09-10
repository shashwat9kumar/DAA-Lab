#include <iostream>
#include <string>

using namespace std;

typedef struct node
{
	string str;
	node *ll,*lm,*rm,*rr;
};

node* get(string s)
{
	node *n = new node();
	n->str=s;
	n->ll=NULL;
	n->lm=NULL;
	n->rm=NULL;
	n->rr=NULL;
	return n;
}

void llll()
{
	
}




int main()
{
	cout<<"For every statement now-on select one option out of the given four (as numeric values)"<<endl;
	cout<<"\n\n"<<endl;
	node *root= get("Hello There.Please select if you're choice:\n1  Bollywood\n2  English\n3  Latino\n4  Punjabi\n");
	
	
	root->ll=get("Great Choice.Now please select the type of artist:\n1  Arijit Singh\n2  Sonu Nigam\n3  Alka Yagnik\n4  Kishore Kumar");
	root->lm=get("Great Choice.Now please select the type of artist:\n1  Beyonce\n2  Katy Perry\n3  Drake\n4  Lady Gaga");
	root->rm=get("Great Choice.Now please select the type of artist:\n1  Shakira\n2  Louis Fonsi\n3  J Balvin\n4  Maluma");
	root->rr=get("Great Choice.Now please select the type of artist:\n1  Hardy Sandhu\n2  Jassi Gill\n3  Jasmine Sandals\n4  Daler Mehndi");
	
	
	
	
	
	root->ll->ll=get("You selected a great artist.Now select a song:\n1  Tera Fitoor\n2  Tum Hi Ho\n3  Sanam Re\n4  Kalank");
	root->ll->lm=get("You selected a great artist.Now select a song:\n1  Bole Chudiyan\n2  Akhiyon se Goli Maare\n3  Suraj Hua Maddham\n4  Mujhse Shaadi Karogi");
	root->ll->rm=get("You selected a great artist.Now select a song:\n1  Laal Dupatta\n2  Tip Tip Barsa Paani\n3  Pardesi Pardesi\n4  Maiyaa Yashoda");
	root->ll->rr=get("You selected a great artist.Now select a song:\n1  Neele Neele Ambar pe\n2  Yeh Doosti\n3  Dilbar Mere\n4  Pal Pal ke Paas");


	root->lm->ll=get("You selected a great artist.Now select a song:\n1  Single Ladies\n2  Crazy in Love\n3  Halo\n4  Pretty Hurts");
	root->lm->lm=get("You selected a great artist.Now select a song:\n1  Fireworks\n2  Dark Horse\n3  Roar\n4  Bon Appetit");
	root->lm->rm=get("You selected a great artist.Now select a song:\n1  God's Plan'\n2  Hotline Bling\n3  Best I ever Had\n4  One Dance");
	root->lm->rr=get("You selected a great artist.Now select a song:\n1  Bad Romance\n2  Apllause\n3  Born This Way\n4  Poker Face");
	
		
	root->rm->ll=get("You selected a great artist.Now select a song:\n1  Loca\n2  Chantage\n3  Estoy Equi\n4  Me Enamore");
	root->rm->lm=get("You selected a great artist.Now select a song:\n1  Despacito\n2  Echame la culpa\n3  Calypso\n4  Solo");
	root->rm->rm=get("You selected a great artist.Now select a song:\n1  Mi Gente\n2  X\n3  Say My Name\n4  Bonita");
	root->rm->rr=get("You selected a great artist.Now select a song:\n1  Medellin\n2  Mala Mia\n3  Creeme\n4  Chantage");
	
	root->rr->ll=get("You selected a great artist.Now select a song:\n1  Kya baat ay\n2  Joker\n3  Backbone\n4  Naah");
	root->rr->lm=get("You selected a great artist.Now select a song:\n1  Bapu Zimidar\n2  Nikle Currant\n3  Attt Karti\n4  Gabbroo");
	root->rr->rm=get("You selected a great artist.Now select a song:\n1  Illegal Weapon\n2  Whiskey Di Bottal\n3  Je Menu Yaar na Mile\n4  Laddu");
	root->rr->rr=get("You selected a great artist.Now select a song:\n1  Tunak Tunak Tun\n2  Bolo Ta Ra Ra\n3  Ho jayegi Balle Balle\n4  Alia re Alia");
	
	
	
	
	root->ll->ll->ll=get("The rating of the song is: 3 stars");
	root->ll->ll->lm=get("The rating of the song is: 4 stars");
	root->ll->ll->rm=get("The rating of the song is: 3 stars");
	root->ll->ll->rr=get("The rating of the song is: 3 stars");
	
	root->ll->lm->ll=get("The rating of the song is: 4 stars");
	root->ll->lm->lm=get("The rating of the song is: 5 stars");
	root->ll->lm->rm=get("The rating of the song is: 3 stars");
	root->ll->lm->rr=get("The rating of the song is: 3 stars");
	
	root->ll->rm->ll=get("The rating of the song is: 3 stars");
	root->ll->rm->lm=get("The rating of the song is: 5 stars");
	root->ll->rm->rm=get("The rating of the song is: 4 stars");
	root->ll->rm->rr=get("The rating of the song is: 4 stars");
	
	root->ll->rr->ll=get("The rating of the song is: 5 stars");
	root->ll->rr->lm=get("The rating of the song is: 4 stars");
	root->ll->rr->rm=get("The rating of the song is: 3 stars");
	root->ll->rr->rr=get("The rating of the song is: 4 stars");
	
	
	
	root->lm->ll->ll=get("The rating of the song is: 5 stars");
	root->lm->ll->lm=get("The rating of the song is: 4 stars");
	root->lm->ll->rm=get("The rating of the song is: 5 stars");
	root->lm->ll->rr=get("The rating of the song is: 3 stars");
	
	root->lm->lm->ll=get("The rating of the song is: 5 stars");
	root->lm->lm->lm=get("The rating of the song is: 5 stars");
	root->lm->lm->rm=get("The rating of the song is: 5 stars");
	root->lm->lm->rr=get("The rating of the song is: 4 stars");
	
	root->lm->rm->ll=get("The rating of the song is: 4 stars");
	root->lm->rm->lm=get("The rating of the song is: 4 stars");
	root->lm->rm->rm=get("The rating of the song is: 2 stars");
	root->lm->rm->rr=get("The rating of the song is: 3 stars");
	
	root->lm->rr->ll=get("The rating of the song is: 5 stars");
	root->lm->rr->lm=get("The rating of the song is: 3 stars");
	root->lm->rr->rm=get("The rating of the song is: 4 stars");
	root->lm->rr->rr=get("The rating of the song is: 5 stars");
	
	
	
	root->rm->ll->ll=get("The rating of the song is: 4 stars");
	root->rm->ll->lm=get("The rating of the song is: 4 stars");
	root->rm->ll->rm=get("The rating of the song is: 1 stars");
	root->rm->ll->rr=get("The rating of the song is: 3 stars");
	
	root->rm->lm->ll=get("The rating of the song is: 5 stars");
	root->rm->lm->lm=get("The rating of the song is: 4 stars");
	root->rm->lm->rm=get("The rating of the song is: 2 stars");
	root->rm->lm->rr=get("The rating of the song is: 1 stars");
	
	root->rm->rm->ll=get("The rating of the song is: 4 stars");
	root->rm->rm->lm=get("The rating of the song is: 1 stars");
	root->rm->rm->rm=get("The rating of the song is: 4 stars");
	root->rm->rm->rr=get("The rating of the song is: 2 stars");
	
	root->rm->rr->ll=get("The rating of the song is: 2 stars");
	root->rm->rr->lm=get("The rating of the song is: 1 stars");
	root->rm->rr->rm=get("The rating of the song is: 1 stars");
	root->rm->rr->rr=get("The rating of the song is: 4 stars");
	
	
	
	root->rr->ll->ll=get("The rating of the song is: 4 stars");
	root->rr->ll->lm=get("The rating of the song is: 3 stars");
	root->rr->ll->rm=get("The rating of the song is: 3 stars");
	root->rr->ll->rr=get("The rating of the song is: 4 stars");
	
	root->rr->lm->ll=get("The rating of the song is: 2 stars");
	root->rr->lm->lm=get("The rating of the song is: 2 stars");
	root->rr->lm->rm=get("The rating of the song is: 2 stars");
	root->rr->lm->rr=get("The rating of the song is: 3 stars");
	
	root->rr->rm->ll=get("The rating of the song is: 1 stars");
	root->rr->rm->lm=get("The rating of the song is: 2 stars");
	root->rr->rm->rm=get("The rating of the song is: 4 stars");
	root->rr->rm->rr=get("The rating of the song is: 2 stars");
	
	root->rr->rr->ll=get("The rating of the song is: 5 stars");
	root->rr->rr->lm=get("The rating of the song is: 4 stars");
	root->rr->rr->rm=get("The rating of the song is: 3 stars");
	root->rr->rr->rr=get("The rating of the song is: 1 stars");
	
	
	
	
	cout<<root->str<<endl;
	cout<<endl;
	int n;
	cin>>n;
	cout<<"\n\n\n"<<endl;
	
	if(n==1)
	{
		cout<<root->ll->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		{
			cout<<root->ll->ll->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->ll->ll->ll->str<<endl;
		else if(n==2)
		cout<<root->ll->ll->lm->str<<endl;
		else if(n==3)
		cout<<root->ll->ll->rm->str<<endl;
		else
		cout<<root->ll->ll->rr->str<<endl;
		}
		
		else if(n==2)
		{
			cout<<root->ll->lm->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->ll->lm->ll->str<<endl;
		else if(n==2)
		cout<<root->ll->lm->lm->str<<endl;
		else if(n==3)
		cout<<root->ll->lm->rm->str<<endl;
		else
		cout<<root->ll->lm->rr->str<<endl;
		}
		
		else if(n==3)
		{
			cout<<root->ll->rm->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->ll->rm->ll->str<<endl;
		else if(n==2)
		cout<<root->ll->rm->lm->str<<endl;
		else if(n==3)
		cout<<root->ll->rm->rm->str<<endl;
		else
		cout<<root->ll->rm->rr->str<<endl;
		}
		
		else
		{
			cout<<root->ll->rr->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->ll->rr->ll->str<<endl;
		else if(n==2)
		cout<<root->ll->rr->lm->str<<endl;
		else if(n==3)
		cout<<root->ll->rr->rm->str<<endl;
		else
		cout<<root->ll->rr->rr->str<<endl;
		}
			
	}
	else if(n==2)
	{
		cout<<root->lm->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		{
			        cout<<root->lm->ll->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->lm->ll->ll->str<<endl;
		else if(n==2)
		cout<<root->lm->ll->lm->str<<endl;
		else if(n==3)
		cout<<root->lm->ll->rm->str<<endl;
		else
		cout<<root->lm->ll->rr->str<<endl;
		}
		
		else if(n==2)
		{
			cout<<root->lm->lm->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->lm->lm->ll->str<<endl;
		else if(n==2)
		cout<<root->lm->lm->lm->str<<endl;
		else if(n==3)
		cout<<root->lm->lm->rm->str<<endl;
		else
		cout<<root->lm->lm->rr->str<<endl;
		}
		
		else if(n==3)
		{
			cout<<root->lm->rm->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->lm->rm->ll->str<<endl;
		else if(n==2)
		cout<<root->lm->rm->lm->str<<endl;
		else if(n==3)
		cout<<root->lm->rm->rm->str<<endl;
		else
		cout<<root->lm->rm->rr->str<<endl;
		}
		
		else
		{
			cout<<root->lm->rr->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->lm->rr->ll->str<<endl;
		else if(n==2)
		cout<<root->lm->rr->lm->str<<endl;
		else if(n==3)
		cout<<root->lm->rr->rm->str<<endl;
		else
		cout<<root->lm->rr->rr->str<<endl;
		}
		
	}

	else if(n==3)
	{
		cout<<root->rm->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		{
			    cout<<root->rm->ll->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->rm->ll->ll->str<<endl;
		else if(n==2)
		cout<<root->rm->ll->lm->str<<endl;
		else if(n==3)
		cout<<root->rm->ll->rm->str<<endl;
		else
		cout<<root->rm->ll->rr->str<<endl;
		}
		
		else if(n==2)
		{
			cout<<root->rm->lm->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->rm->lm->ll->str<<endl;
		else if(n==2)
		cout<<root->rm->lm->lm->str<<endl;
		else if(n==3)
		cout<<root->rm->lm->rm->str<<endl;
		else
		cout<<root->rm->lm->rr->str<<endl;
		}
		
		else if(n==3)
		{
			cout<<root->rm->rm->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->rm->rm->ll->str<<endl;
		else if(n==2)
		cout<<root->rm->rm->lm->str<<endl;
		else if(n==3)
		cout<<root->rm->rm->rm->str<<endl;
		else
		cout<<root->rm->rm->rr->str<<endl;
		}
		
		else
		{
			cout<<root->rm->rr->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->rm->rr->ll->str<<endl;
		else if(n==2)
		cout<<root->rm->rr->lm->str<<endl;
		else if(n==3)
		cout<<root->rm->rr->rm->str<<endl;
		else
		cout<<root->rm->rr->rr->str<<endl;
		}
		
	}

	else
	{
		cout<<root->rr->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		{
			cout<<root->rr->ll->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->rr->ll->ll->str<<endl;
		else if(n==2)
		cout<<root->rr->ll->lm->str<<endl;
		else if(n==3)
		cout<<root->rr->ll->rm->str<<endl;
		else
		cout<<root->rr->ll->rr->str<<endl;
		}
		
		else if(n==2)
		{
			cout<<root->rr->lm->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->rr->lm->ll->str<<endl;
		else if(n==2)
		cout<<root->rr->lm->lm->str<<endl;
		else if(n==3)
		cout<<root->rr->lm->rm->str<<endl;
		else
		cout<<root->rr->lm->rr->str<<endl;
		}
		
		else if(n==3)
		{
			cout<<root->rr->rm->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->rr->rm->ll->str<<endl;
		else if(n==2)
		cout<<root->rr->rm->lm->str<<endl;
		else if(n==3)
		cout<<root->rr->rm->rm->str<<endl;
		else
		cout<<root->rr->rm->rr->str<<endl;
		}
		
		else
		{
			cout<<root->rr->rr->str<<endl;
		cout<<endl;
		
		cin>>n;
		cout<<"\n\n\n"<<endl;
	
		if(n==1)
		cout<<root->rr->rr->ll->str<<endl;
		else if(n==2)
		cout<<root->rr->rr->lm->str<<endl;
		else if(n==3)
		cout<<root->rr->rr->rm->str<<endl;
		else
		cout<<root->rr->rr->rr->str<<endl;
		}
		
	}
	
return 0;	
	
}
