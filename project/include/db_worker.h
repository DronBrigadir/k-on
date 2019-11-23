#ifndef K_ON_DB_WORKER_H
#define K_ON_DB_WORKER_H

#include "db_wrapper.h"


class DbWorker {
public:
    explicit DbWorker(const std::string &database);
    ~DbWorker();

    bool add_user(const std::string &login, const std::string &password);
    bool add_song(const std::string &name, const std::string &author, const std::string &genre, int duration);
    bool add_like_dislike(int user_id, int song_id, bool value);
    bool add_listen(int user_id, int song_id, int count);
    bool add_recommendation(int user_id, int song_id);

private:
    DbWrapper wrapper;
};

#endif  // K_ON_DB_WORKER_H
