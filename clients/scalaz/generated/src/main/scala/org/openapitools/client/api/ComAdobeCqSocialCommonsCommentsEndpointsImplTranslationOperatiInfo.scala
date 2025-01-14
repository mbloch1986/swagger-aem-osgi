package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialCommonsCommentsEndpointsImplTranslationOperatiInfo._

case class ComAdobeCqSocialCommonsCommentsEndpointsImplTranslationOperatiInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialCommonsCommentsEndpointsImplTranslationOperatiProperties])

object ComAdobeCqSocialCommonsCommentsEndpointsImplTranslationOperatiInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialCommonsCommentsEndpointsImplTranslationOperatiInfoCodecJson: CodecJson[ComAdobeCqSocialCommonsCommentsEndpointsImplTranslationOperatiInfo] = CodecJson.derive[ComAdobeCqSocialCommonsCommentsEndpointsImplTranslationOperatiInfo]
  implicit val ComAdobeCqSocialCommonsCommentsEndpointsImplTranslationOperatiInfoDecoder: EntityDecoder[ComAdobeCqSocialCommonsCommentsEndpointsImplTranslationOperatiInfo] = jsonOf[ComAdobeCqSocialCommonsCommentsEndpointsImplTranslationOperatiInfo]
  implicit val ComAdobeCqSocialCommonsCommentsEndpointsImplTranslationOperatiInfoEncoder: EntityEncoder[ComAdobeCqSocialCommonsCommentsEndpointsImplTranslationOperatiInfo] = jsonEncoderOf[ComAdobeCqSocialCommonsCommentsEndpointsImplTranslationOperatiInfo]
}
