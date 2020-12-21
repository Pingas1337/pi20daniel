import discord

class MyClient(discord.Client):
	async def on_ready(self):
		print('Вошёл как {0}!'.format(self.user))

	async def on_message(self, message):
		print('Message from {0.author}: {0.content}'.format(message))

client = MyClient()
client.run('6VR7p2YyjiPk_ARQoH0a0JGukzEpA2kB')		