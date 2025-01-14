package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerInfo._

case class ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties])

object ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerInfoCodecJson: CodecJson[ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerInfo] = CodecJson.derive[ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerInfo]
  implicit val ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerInfoDecoder: EntityDecoder[ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerInfo] = jsonOf[ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerInfo]
  implicit val ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerInfoEncoder: EntityEncoder[ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerInfo] = jsonEncoderOf[ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerInfo]
}
