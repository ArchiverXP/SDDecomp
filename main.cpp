int main(int* param_1){
    int var1;
    int *var2;
    char iVar3;

    iVar3 = 0;

    // load byte 1 with param_1

    var2 = param_1 + 1;

    var1 = *param_1;


    // if r2 is 0, then branch to label
    while(var1 == 0){
        // load bye 1 to r1, then write the result to r2
        iVar3 = iVar3 + 1;
        var1 = var1 + 1;
        var2 = var2;
    }
    return iVar3;

}