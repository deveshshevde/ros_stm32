#ifndef _ROS_atom_drive_Science_bsx_h
#define _ROS_atom_drive_Science_bsx_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace atom_drive
{

  class Science_bsx : public ros::Msg
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
      typedef int32_t _raman_direction_v_type;
      _raman_direction_v_type raman_direction_v;
      typedef int32_t _raman_speed_v_type;
      _raman_speed_v_type raman_speed_v;
      typedef int32_t _raman_direction_h_type;
      _raman_direction_h_type raman_direction_h;
      typedef int32_t _raman_speed_h_type;
      _raman_speed_h_type raman_speed_h;
      typedef int32_t _drill_direction_type;
      _drill_direction_type drill_direction;
      typedef int32_t _drill_speed_type;
      _drill_speed_type drill_speed;
      typedef int32_t _auger_direction_type;
      _auger_direction_type auger_direction;
      typedef int32_t _h_auger_direction_type;
      _h_auger_direction_type h_auger_direction;
      typedef int32_t _carousel_direction_type;
      _carousel_direction_type carousel_direction;
      typedef int32_t _carousel_speed_type;
      _carousel_speed_type carousel_speed;
      typedef int32_t _reagent_direction_type;
      _reagent_direction_type reagent_direction;

    Science_bsx():
      ld(0),
      ls(0),
      rd(0),
      rs(0),
      mode(0),
      raman_direction_v(0),
      raman_speed_v(0),
      raman_direction_h(0),
      raman_speed_h(0),
      drill_direction(0),
      drill_speed(0),
      auger_direction(0),
      h_auger_direction(0),
      carousel_direction(0),
      carousel_speed(0),
      reagent_direction(0)
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
      } u_raman_direction_v;
      u_raman_direction_v.real = this->raman_direction_v;
      *(outbuffer + offset + 0) = (u_raman_direction_v.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_raman_direction_v.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_raman_direction_v.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_raman_direction_v.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->raman_direction_v);
      union {
        int32_t real;
        uint32_t base;
      } u_raman_speed_v;
      u_raman_speed_v.real = this->raman_speed_v;
      *(outbuffer + offset + 0) = (u_raman_speed_v.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_raman_speed_v.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_raman_speed_v.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_raman_speed_v.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->raman_speed_v);
      union {
        int32_t real;
        uint32_t base;
      } u_raman_direction_h;
      u_raman_direction_h.real = this->raman_direction_h;
      *(outbuffer + offset + 0) = (u_raman_direction_h.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_raman_direction_h.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_raman_direction_h.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_raman_direction_h.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->raman_direction_h);
      union {
        int32_t real;
        uint32_t base;
      } u_raman_speed_h;
      u_raman_speed_h.real = this->raman_speed_h;
      *(outbuffer + offset + 0) = (u_raman_speed_h.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_raman_speed_h.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_raman_speed_h.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_raman_speed_h.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->raman_speed_h);
      union {
        int32_t real;
        uint32_t base;
      } u_drill_direction;
      u_drill_direction.real = this->drill_direction;
      *(outbuffer + offset + 0) = (u_drill_direction.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_drill_direction.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_drill_direction.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_drill_direction.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->drill_direction);
      union {
        int32_t real;
        uint32_t base;
      } u_drill_speed;
      u_drill_speed.real = this->drill_speed;
      *(outbuffer + offset + 0) = (u_drill_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_drill_speed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_drill_speed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_drill_speed.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->drill_speed);
      union {
        int32_t real;
        uint32_t base;
      } u_auger_direction;
      u_auger_direction.real = this->auger_direction;
      *(outbuffer + offset + 0) = (u_auger_direction.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_auger_direction.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_auger_direction.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_auger_direction.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->auger_direction);
      union {
        int32_t real;
        uint32_t base;
      } u_h_auger_direction;
      u_h_auger_direction.real = this->h_auger_direction;
      *(outbuffer + offset + 0) = (u_h_auger_direction.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_h_auger_direction.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_h_auger_direction.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_h_auger_direction.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->h_auger_direction);
      union {
        int32_t real;
        uint32_t base;
      } u_carousel_direction;
      u_carousel_direction.real = this->carousel_direction;
      *(outbuffer + offset + 0) = (u_carousel_direction.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_carousel_direction.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_carousel_direction.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_carousel_direction.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->carousel_direction);
      union {
        int32_t real;
        uint32_t base;
      } u_carousel_speed;
      u_carousel_speed.real = this->carousel_speed;
      *(outbuffer + offset + 0) = (u_carousel_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_carousel_speed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_carousel_speed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_carousel_speed.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->carousel_speed);
      union {
        int32_t real;
        uint32_t base;
      } u_reagent_direction;
      u_reagent_direction.real = this->reagent_direction;
      *(outbuffer + offset + 0) = (u_reagent_direction.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_reagent_direction.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_reagent_direction.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_reagent_direction.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->reagent_direction);
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
      } u_raman_direction_v;
      u_raman_direction_v.base = 0;
      u_raman_direction_v.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_raman_direction_v.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_raman_direction_v.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_raman_direction_v.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->raman_direction_v = u_raman_direction_v.real;
      offset += sizeof(this->raman_direction_v);
      union {
        int32_t real;
        uint32_t base;
      } u_raman_speed_v;
      u_raman_speed_v.base = 0;
      u_raman_speed_v.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_raman_speed_v.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_raman_speed_v.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_raman_speed_v.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->raman_speed_v = u_raman_speed_v.real;
      offset += sizeof(this->raman_speed_v);
      union {
        int32_t real;
        uint32_t base;
      } u_raman_direction_h;
      u_raman_direction_h.base = 0;
      u_raman_direction_h.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_raman_direction_h.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_raman_direction_h.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_raman_direction_h.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->raman_direction_h = u_raman_direction_h.real;
      offset += sizeof(this->raman_direction_h);
      union {
        int32_t real;
        uint32_t base;
      } u_raman_speed_h;
      u_raman_speed_h.base = 0;
      u_raman_speed_h.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_raman_speed_h.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_raman_speed_h.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_raman_speed_h.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->raman_speed_h = u_raman_speed_h.real;
      offset += sizeof(this->raman_speed_h);
      union {
        int32_t real;
        uint32_t base;
      } u_drill_direction;
      u_drill_direction.base = 0;
      u_drill_direction.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_drill_direction.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_drill_direction.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_drill_direction.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->drill_direction = u_drill_direction.real;
      offset += sizeof(this->drill_direction);
      union {
        int32_t real;
        uint32_t base;
      } u_drill_speed;
      u_drill_speed.base = 0;
      u_drill_speed.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_drill_speed.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_drill_speed.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_drill_speed.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->drill_speed = u_drill_speed.real;
      offset += sizeof(this->drill_speed);
      union {
        int32_t real;
        uint32_t base;
      } u_auger_direction;
      u_auger_direction.base = 0;
      u_auger_direction.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_auger_direction.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_auger_direction.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_auger_direction.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->auger_direction = u_auger_direction.real;
      offset += sizeof(this->auger_direction);
      union {
        int32_t real;
        uint32_t base;
      } u_h_auger_direction;
      u_h_auger_direction.base = 0;
      u_h_auger_direction.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_h_auger_direction.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_h_auger_direction.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_h_auger_direction.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->h_auger_direction = u_h_auger_direction.real;
      offset += sizeof(this->h_auger_direction);
      union {
        int32_t real;
        uint32_t base;
      } u_carousel_direction;
      u_carousel_direction.base = 0;
      u_carousel_direction.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_carousel_direction.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_carousel_direction.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_carousel_direction.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->carousel_direction = u_carousel_direction.real;
      offset += sizeof(this->carousel_direction);
      union {
        int32_t real;
        uint32_t base;
      } u_carousel_speed;
      u_carousel_speed.base = 0;
      u_carousel_speed.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_carousel_speed.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_carousel_speed.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_carousel_speed.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->carousel_speed = u_carousel_speed.real;
      offset += sizeof(this->carousel_speed);
      union {
        int32_t real;
        uint32_t base;
      } u_reagent_direction;
      u_reagent_direction.base = 0;
      u_reagent_direction.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_reagent_direction.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_reagent_direction.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_reagent_direction.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->reagent_direction = u_reagent_direction.real;
      offset += sizeof(this->reagent_direction);
     return offset;
    }

    virtual const char * getType() override { return "atom_drive/Science_bsx"; };
    virtual const char * getMD5() override { return "676ef5bd07a3073421607504c8b7dbfe"; };

  };

}
#endif
