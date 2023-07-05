# (c) @AbirHasan2005

import os
import logging

logging.basicConfig(
    format='%(name)s - %(levelname)s - %(message)s',
    handlers=[logging.FileHandler('log.txt'),
              logging.StreamHandler()],
    level=logging.INFO
)


class Config(object):
    API_ID = int(os.environ.get("API_ID", "6357458"))
    API_HASH = os.environ.get("API_HASH", "0a8a7fc9c3be210a33f07ba73d225123")
    BOT_TOKEN = os.environ.get("BOT_TOKEN", "6022881684:AAFqDjt6iFNDTzPdhKaE8bBr92qH9xpDy9I")
    DOWNLOAD_DIR = os.environ.get("DOWNLOAD_DIR", "./downloads")
    LOGGER = logging
    OWNER_ID = int(os.environ.get("OWNER_ID", 1130052935))
    PRO_USERS = list(set(int(x) for x in os.environ.get("PRO_USERS", "0").split()))
    PRO_USERS.append(OWNER_ID)
    MONGODB_URI = os.environ.get("MONGODB_URI", "")
    LOG_CHANNEL = int(os.environ.get("LOG_CHANNEL", "-100"))
    BROADCAST_AS_COPY = bool(os.environ.get("BROADCAST_AS_COPY", "False"))
