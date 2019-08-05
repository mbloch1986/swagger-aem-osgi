package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplInfo._

case class ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties])

object ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplInfoCodecJson: CodecJson[ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplInfo] = CodecJson.derive[ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplInfo]
  implicit val ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplInfoDecoder: EntityDecoder[ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplInfo] = jsonOf[ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplInfo]
  implicit val ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplInfoEncoder: EntityEncoder[ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplInfo] = jsonEncoderOf[ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplInfo]
}