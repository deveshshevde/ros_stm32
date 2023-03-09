#ifndef _ROS_atom_drive_Arm_h
#define _ROS_atom_drive_Arm_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace atom_drive
{

  class Arm : public ros::Msg
  {
    public:
      typedef uint8_t _base_speed_type;
      _base_speed_type base_speed;
      typedef uint8_t _base_dir_type;
      _base_dir_type base_dir;
      typedef uint8_t _shoulder_speed_type;
      _shoulder_speed_type shoulder_speed;
      typedef uint8_t _shoulder_dir_type;
      _shoulder_dir_type shoulder_dir;
      typedef uint8_t _elbow_speed_type;
      _elbow_speed_type elbow_speed;
      typedef uint8_t _elbow_dir_type;
      _elbow_dir_type elbow_dir;
      typedef uint8_t _yaw_speed_type;
      _yaw_speed_type yaw_speed;
      typedef uint8_t _yaw_dir_type;
      _yaw_dir_type yaw_dir;
      typedef uint8_t _pitch_speed_type;
      _pitch_speed_type pitch_speed;
      typedef uint8_t _pitch_dir_type;
      _pitch_dir_type pitch_dir;
      typedef uint8_t _roll_speed_type;
      _roll_speed_type roll_speed;
      typedef uint8_t _roll_dir_type;
      _roll_dir_type roll_dir;
      typedef uint8_t _end_eff_speed_type;
      _end_eff_speed_type end_eff_speed;
      typedef uint8_t _end_eff_dir_type;
      _end_eff_dir_type end_eff_dir;
      typedef uint8_t _sol_dir_type;
      _sol_dir_type sol_dir;

    Arm():
      base_speed(0),
      base_dir(0),
      shoulder_speed(0),
      shoulder_dir(0),
      elbow_speed(0),
      elbow_dir(0),
      yaw_speed(0),
      yaw_dir(0),
      pitch_speed(0),
      pitch_dir(0),
      roll_speed(0),
      roll_dir(0),
      end_eff_speed(0),
      end_eff_dir(0),
      sol_dir(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->base_speed >> (8 * 0)) & 0xFF;
      offset += sizeof(this->base_speed);
      *(outbuffer + offset + 0) = (this->base_dir >> (8 * 0)) & 0xFF;
      offset += sizeof(this->base_dir);
      *(outbuffer + offset + 0) = (this->shoulder_speed >> (8 * 0)) & 0xFF;
      offset += sizeof(this->shoulder_speed);
      *(outbuffer + offset + 0) = (this->shoulder_dir >> (8 * 0)) & 0xFF;
      offset += sizeof(this->shoulder_dir);
      *(outbuffer + offset + 0) = (this->elbow_speed >> (8 * 0)) & 0xFF;
      offset += sizeof(this->elbow_speed);
      *(outbuffer + offset + 0) = (this->elbow_dir >> (8 * 0)) & 0xFF;
      offset += sizeof(this->elbow_dir);
      *(outbuffer + offset + 0) = (this->yaw_speed >> (8 * 0)) & 0xFF;
      offset += sizeof(this->yaw_speed);
      *(outbuffer + offset + 0) = (this->yaw_dir >> (8 * 0)) & 0xFF;
      offset += sizeof(this->yaw_dir);
      *(outbuffer + offset + 0) = (this->pitch_speed >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pitch_speed);
      *(outbuffer + offset + 0) = (this->pitch_dir >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pitch_dir);
      *(outbuffer + offset + 0) = (this->roll_speed >> (8 * 0)) & 0xFF;
      offset += sizeof(this->roll_speed);
      *(outbuffer + offset + 0) = (this->roll_dir >> (8 * 0)) & 0xFF;
      offset += sizeof(this->roll_dir);
      *(outbuffer + offset + 0) = (this->end_eff_speed >> (8 * 0)) & 0xFF;
      offset += sizeof(this->end_eff_speed);
      *(outbuffer + offset + 0) = (this->end_eff_dir >> (8 * 0)) & 0xFF;
      offset += sizeof(this->end_eff_dir);
      *(outbuffer + offset + 0) = (this->sol_dir >> (8 * 0)) & 0xFF;
      offset += sizeof(this->sol_dir);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->base_speed =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->base_speed);
      this->base_dir =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->base_dir);
      this->shoulder_speed =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->shoulder_speed);
      this->shoulder_dir =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->shoulder_dir);
      this->elbow_speed =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->elbow_speed);
      this->elbow_dir =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->elbow_dir);
      this->yaw_speed =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->yaw_speed);
      this->yaw_dir =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->yaw_dir);
      this->pitch_speed =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->pitch_speed);
      this->pitch_dir =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->pitch_dir);
      this->roll_speed =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->roll_speed);
      this->roll_dir =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->roll_dir);
      this->end_eff_speed =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->end_eff_speed);
      this->end_eff_dir =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->end_eff_dir);
      this->sol_dir =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->sol_dir);
     return offset;
    }

    virtual const char * getType() override { return "atom_drive/Arm"; };
    virtual const char * getMD5() override { return "e13430f9e9a01c53c491cb7bfa5d6034"; };

  };

}
#endif
