Hi This is Your Cheat Sheet For Code Functions And Examples Of Their Use !


Vectors:

  Written as followed; 
    vector <'data_type'> 'name_of_variable'['size_here_optional'] = {'values_upon_creation_optional'};

  Assume we made a ( vec <string> Name = {"Abbas"};
    This is what we can do with it:

 Functions:


    
  Name.assign('number of elements starting from 1 to inf' , 'the wanted value for all');

        Example:
          Name.assign(1,"Sabbasa");
            This makes the vector front/index 0 have a string element "Sabbasa".
            
   Name.push_back('value which you want to add to vector') : 
     
          Example:
             Name.push_back(7); 
               This will send the value 7 to our vector, if we do it again Name.push_back(12); it will have ( 7 , 12 ).
   
   Name.pop_back();
            
          Example:
            Name.pop_back();
              This will remove a value located at the end of the vector.
              for example if the vector had ( 7 , 12 , 5 ) it will now be ( 7 , 12 ).

   Name.front();

         Example:
           Name.front()=6;
           cout<<Name.front();
             This function can read and rewrite the front of the vector,
             for example we can also do Name.front()=0; and now it will be equal to zero.
  Name.back();

        Example:
          Name.back()=7;
          cout<<Name.back();
            This is exactly like front but for the end of the vector. (contains same use and syntax)
            
  Name.size();

        Example:
          cout<<name.size();
            This function returns how many elements are in the vector .
            this is also the size of the vector if you do -1 to its value.

  Name.clear();

        Example:
          vector <int> Abbas={1,2,3,4,5};
          Abbas.clear();
          Abbas.push_back(3);
          cout<<Abbas[0]<<Abbas[1]<<Abbas[2]<<Abbas[3]<<Abbas[4];

          It will print ( 3 2 3 4 5 ) , which means it clears the 
          vector of any constraints that don't allow it to modify 
          the front, and starts rewriting the vector depending on 
          later incoming input.

  Name.swap('name_of_other_vector')

        Example:
          vector <int> Abbas={1,2,3,4,5};
          vector <int> Sugar_Mommy_Sara={9,8,7,6,5};
          
          Abbas.swap(Sugar_Mommy_Sara);
          
          cout<<Abbas[0]<<Abbas[1]<<Abbas[2]<<Abbas[3]<<Abbas[4]<<endl;
          cout<<Sugar_Mommy_Sara[0]<<Sugar_Mommy_Sara[1]<<Sugar_Mommy_Sara[2]<<Sugar_Mommy_Sara[3]<<Sugar_Mommy_Sara[4];

          it will print ( 9 8 7 6 5 ) then ( 1 2 3 4 5 ), it just swaps the vectors with each others values.
  
