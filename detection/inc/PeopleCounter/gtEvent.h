#ifndef GTEVENT_H
#define GTEVENT_H

#include <vector>
#include "DetectedBlob.h"

class gtEvent{
    public:
        gtEvent(){}
        ~gtEvent(){}

        int getStart();
        void setStart(int s);
        int getEnd();
        void setEnd(int e);
        cv::Rect getStartRect();
        void setStartRect(cv::Rect sr);
        cv::Rect getEndRect();
        void setEndRect(cv::Rect er);
        bool getPosToNeg();
        void setPosToNeg(bool v);

    private:
        int start;
        int end;
        cv::Rect startRect;
        cv::Rect endRect;
        bool posToNeg;
};

#endif
