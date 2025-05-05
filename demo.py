#chatbot


def chatbot():
    print("HEllo , Myself CHATGPT , How May i help you ??")
    print("Type 'exit' to terminate the chat.")
    while True :
        
        user_input=input("You: " ).lower()
        if("hi" in user_input or "hello" in user_input):
            print("Hello, How are you ? ")
        elif("order" in user_input):
            print("You can track your orders using their id on the website")
        elif("return" in user_input):
            print("Returns can be issued within 7 days of delivery.")
        elif("refund" in user_input):
            print("Refund may take upto 3-4 working days to be credited")
        elif("exit" in user_input):
            print("Thankyou For trusting us. Your session has been terminated")
            break
        else:
            print("Incorrect PRompt !!.")
chatbot()