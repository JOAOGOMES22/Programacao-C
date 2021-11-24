struct vetor1{
    float x;
    float y;
    float z;
};
struct vetor2{
    float x;
    float y;
    float z;
};

int main(){
    float x,y,z;
    struct vetor1 dados1={150, 253.32, 360};
    struct vetor2 dados2={184.30, 153.82, 268.37};
    
    x = dados1.x + dados2.x;
    y = dados1.y + dados2.y;
    z = dados1.z + dados2.z;

    printf("A soma dos vetores ficou \n X= %.2f, Y= %.2f e Z= %.2f",x,y,z); 

}