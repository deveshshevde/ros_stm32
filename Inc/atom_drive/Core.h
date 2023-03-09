#ifndef _ROS_atom_drive_Core_h
#define _ROS_atom_drive_Core_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace atom_drive
{

  class Core : public ros::Msg
  {
    public:
      typedef int32_t _ld_type;
      _ld_type ld;
      typedef int32_t _ls_type;
      _ls_type ls;
      typedef int32_t _rd_type;
      _rd_type rd;
      typedef int32_t _rs_type;
      _rs_type rs;
      typedef int32_t _mode_type;
      _mode_type mode;
      typedef int32_t _base_type;
      _base_type base;
      typedef int32_t _shoulder_type;
      _shoulder_type shoulder;
      typedef int32_t _elbow_type;
      _elbow_type elbow;
      typedef int32_t _wrist_type;
      _wrist_type wrist;
      typedef int32_t _gripper_type;
      _gripper_type gripper;

    Core():
      ld(0),
      ls(0),
      rd(0),
      rs(0),
      mode(0),
      base(0),
      shoulder(0),
      elbow(0),
      wrist(0),
      gripper(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_ld;
      u_ld.real = this->ld;
      *(outbuffer + offset + 0) = (u_ld.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ld.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ld.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ld.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ld);
      union {
        int32_t real;
        uint32_t base;
      } u_ls;
      u_ls.real = this->ls;
      *(outbuffer + offset + 0) = (u_ls.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ls.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ls.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ls.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ls);
      union {
        int32_t real;
        uint32_t base;
      } u_rd;
      u_rd.real = this->rd;
      *(outbuffer + offset + 0) = (u_rd.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rd.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rd.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rd.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rd);
      union {
        int32_t real;
        uint32_t base;
      } u_rs;
      u_rs.real = this->rs;
      *(outbuffer + offset + 0) = (u_rs.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rs.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rs.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rs.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rs);
      union {
        int32_t real;
        uint32_t base;
      } u_mode;
      u_mode.real = this->mode;
      *(outbuffer + offset + 0) = (u_mode.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_mode.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_mode.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_mode.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->mode);
      union {
        int32_t real;
        uint32_t base;
      } u_base;
      u_base.real = this->base;
      *(outbuffer + offset + 0) = (u_base.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_base.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_base.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_base.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->base);
      union {
        int32_t real;
        uint32_t base;
      } u_shoulder;
      u_shoulder.real = this->shoulder;
      *(outbuffer + offset + 0) = (u_shoulder.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_shoulder.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_shoulder.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_shoulder.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->shoulder);
      union {
        int32_t real;
        uint32_t base;
      } u_elbow;
      u_elbow.real = this->elbow;
      *(outbuffer + offset + 0) = (u_elbow.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_elbow.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_elbow.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_elbow.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->elbow);
      union {
        int32_t real;
        uint32_t base;
      } u_wrist;
      u_wrist.real = this->wrist;
      *(outbuffer + offset + 0) = (u_wrist.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_wrist.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_wrist.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_wrist.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->wrist);
      union {
        int32_t real;
        uint32_t base;
      } u_gripper;
      u_gripper.real = this->gripper;
      *(outbuffer + offset + 0) = (u_gripper.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gripper.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gripper.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gripper.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->gripper);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_ld;
      u_ld.base = 0;
      u_ld.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ld.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ld.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ld.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ld = u_ld.real;
      offset += sizeof(this->ld);
      union {
        int32_t real;
        uint32_t base;
      } u_ls;
      u_ls.base = 0;
      u_ls.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ls.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ls.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ls.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ls = u_ls.real;
      offset += sizeof(this->ls);
      union {
        int32_t real;
        uint32_t base;
      } u_rd;
      u_rd.base = 0;
      u_rd.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rd.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rd.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rd.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rd = u_rd.real;
      offset += sizeof(this->rd);
      union {
        int32_t real;
        uint32_t base;
      } u_rs;
      u_rs.base = 0;
      u_rs.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rs.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rs.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rs.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rs = u_rs.real;
      offset += sizeof(this->rs);
      union {
        int32_t real;
        uint32_t base;
      } u_mode;
      u_mode.base = 0;
      u_mode.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_mode.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_mode.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_mode.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->mode = u_mode.real;
      offset += sizeof(this->mode);
      union {
        int32_t real;
        uint32_t base;
      } u_base;
      u_base.base = 0;
      u_base.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_base.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_base.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_base.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->base = u_base.real;
      offset += sizeof(this->base);
      union {
        int32_t real;
        uint32_t base;
      } u_shoulder;
      u_shoulder.base = 0;
      u_shoulder.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_shoulder.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_shoulder.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_shoulder.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->shoulder = u_shoulder.real;
      offset += sizeof(this->shoulder);
      union {
        int32_t real;
        uint32_t base;
      } u_elbow;
      u_elbow.base = 0;
      u_elbow.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_elbow.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_elbow.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_elbow.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->elbow = u_elbow.real;
      offset += sizeof(this->elbow);
      union {
        int32_t real;
        uint32_t base;
      } u_wrist;
      u_wrist.base = 0;
      u_wrist.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_wrist.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_wrist.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_wrist.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->wrist = u_wrist.real;
      offset += sizeof(this->wrist);
      union {
        int32_t real;
        uint32_t base;
      } u_gripper;
      u_gripper.base = 0;
      u_gripper.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gripper.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gripper.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gripper.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->gripper = u_gripper.real;
      offset += sizeof(this->gripper);
     return offset;
    }

    virtual const char * getType() override { return "atom_drive/Core"; };
    virtual const char * getMD5() override { return "5c9fc657a0f3f1c7503df6db7265493d"; };

  };

}
#endif
