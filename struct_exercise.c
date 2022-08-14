#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    int unique_views;
}Video;

typedef struct {
    char *username;
    Video *watched_videos;
    int watched_videos_size;
}Viewer;

int count_views(Viewer **viewers, int wievers_size, char* video_name){   //**viewers  == *viewers[]

    for (int i=0; i<wievers_size; i++){
        int size = viewers[i]->watched_videos_size;
        for (int j=0; j<size; j++){
            Video *videos = viewers[i]->watched_videos;
            int a = strcmp(videos[j].name, video_name);
            if (a == 0)return videos[j].unique_views;
        }
    }
    return -1;
}

int main(){
    Video videos[]={{.name = "Soccer", .unique_views=500},{.name = "Basketball", .unique_views=1000}};
    Viewer viewer = {.username="Dave", .watched_videos=videos, .watched_videos_size=2};

    Viewer* viewers[] = {&viewer};
    printf("%d", count_views(viewers, 1, "Soccer"));
}