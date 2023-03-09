#ifndef _ROS_atom_drive_Middle_list_h
#define _ROS_atom_drive_Middle_list_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace atom_drive
{

  class Middle_list : public ros::Msg
  {
    public:
      typedef int32_t _horizontal_type;
      _horizontal_type horizontal;
      typedef int32_t _vertical_type;
      _vertical_type vertical;
      typedef float _distance_type;
      _distance_type distance;
      typedef int32_t _detect_type;
      _detect_type detect;
      typedef int32_t _direction_type;
      _direction_type direction;

    Middle_list():
      horizontal(0),
      vertical(0),
      distance(0),
      detect(0),
      direction(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_horizontal;
      u_horizontal.real = this->horizontal;
      *(outbuffer + offset + 0) = (u_horizontal.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_horizontal.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_horizontal.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_horizontal.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->horizontal);
      union {
        int32_t real;
        uint32_t base;
      } u_vertical;
      u_vertical.real = this->vertical;
      *(outbuffer + offset + 0) = (u_vertical.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vertical.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vertical.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vertical.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->vertical);
      union {
        float real;
        uint32_t base;
      } u_distance;
      u_distance.real = this->distance;
      *(outbuffer + offset + 0) = (u_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->distance);
      union {
        int32_t real;
        uint32_t base;
      } u_detect;
      u_detect.real = this->detect;
      *(outbuffer + offset + 0) = (u_detect.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_detect.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_detect.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_detect.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->detect);
      union {
        int32_t real;
        uint32_t base;
      } u_direction;
      u_direction.real = this->direction;
      *(outbuffer + offset + 0) = (u_direction.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_direction.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_direction.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_direction.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->direction);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_horizontal;
      u_horizontal.base = 0;
      u_horizontal.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_horizontal.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_horizontal.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_horizontal.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->horizontal = u_horizontal.real;
      offset += sizeof(this->horizontal);
      union {
        int32_t real;
        uint32_t base;
      } u_vertical;
      u_vertical.base = 0;
      u_vertical.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vertical.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vertical.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vertical.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->vertical = u_vertical.real;
      offset += sizeof(this->vertical);
      union {
        float real;
        uint32_t base;
      } u_distance;
      u_distance.base = 0;
      u_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->distance = u_distance.real;
      offset += sizeof(this->distance);
      union {
        int32_t real;
        uint32_t base;
      } u_detect;
      u_detect.base = 0;
      u_detect.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_detect.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_detect.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_detect.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->detect = u_detect.real;
      offset += sizeof(this->detect);
      union {
        int32_t real;
        uint32_t base;
      } u_direction;
      u_direction.base = 0;
      u_direction.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_direction.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_direction.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_direction.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->direction = u_direction.real;
      offset += sizeof(this->direction);
     return offset;
    }

    virtual const char * getType() override { return "atom_drive/Middle_list"; };
    virtual const char * getMD5() override { return "4399011543b9dc5d6c55eaf895a9faa5"; };

  };

}
#endif
