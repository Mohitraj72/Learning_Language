from instabot import Bot 

my_bot =  Bot()

my_bot.login(username="codewithme_07", password= "7463953066")

#my_bot.follow("coderrana")

my_bot.follow_users(["coding_for_beginners","python.app","py_beginners"])

my_bot.unfollow_users(["coding_for_beginners","python.app","py_beginners"])

my_bot.upload_photo()

my_bot.send_message("Hello i am engineer", "itz.soni.ll")

my_bot.like_user("itz.soni.ll", amount=2)

#comment
user_id = my_bot.get_user_id_from_username("itz.soni.ll")
media_id = my_bot.get_last_user_medias(user_id)
my_bot.comment(media_id, "this is good")

sleep(30)

#get list of followers
followers_list = my_bot.get_user_followers("itz.soni.ll")

followers_list = my_bot.get_user_following("itz.soni.ll")

for count, each_follwers in enumerate (followers_list):
    if count > 4:
        continue
    sleep(5)
    print(my_bot.get_username_from_user_id(each_follower))  #


for count, each_follow in enumerate (following_list):
    if count > 4:
        continue
    sleep(5)
    print(my_bot.get_username_from_user_id(each_follower))  #

    my_bot.logout()





