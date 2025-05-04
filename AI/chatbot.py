def chatbot():
    print("Hello myself ChatGPT :)")
    print("Please type 'exit' to leave the chat \n")
    
          
    
    while True: 
         user_input=input("You : ").lower()
    
         if ("hi" in user_input or "hello" in user_input):
            print("Hello ,how shall i assist you ? \n")
         elif("order" in user_input):
            print("You can track orders using their ID's in the order section\n")
         elif("return" in user_input):
             print("Returns can be issued within 10 days from the day of delivery\n")
         elif("exit" in user_input):
             print("Thankyou. The session is terminated ,you may close the site .\n")
             break
         elif("refund" in user_input):
             print("Refunds may take 2-3 working days to be credited to users bank account\n")
         else:
             print("Invalid prompt !! . Please Enter something else\n")
             
chatbot()