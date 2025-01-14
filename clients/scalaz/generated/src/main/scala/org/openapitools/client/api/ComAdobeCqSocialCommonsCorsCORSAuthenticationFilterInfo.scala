package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterInfo._

case class ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterProperties])

object ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterInfoCodecJson: CodecJson[ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterInfo] = CodecJson.derive[ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterInfo]
  implicit val ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterInfoDecoder: EntityDecoder[ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterInfo] = jsonOf[ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterInfo]
  implicit val ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterInfoEncoder: EntityEncoder[ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterInfo] = jsonEncoderOf[ComAdobeCqSocialCommonsCorsCORSAuthenticationFilterInfo]
}
