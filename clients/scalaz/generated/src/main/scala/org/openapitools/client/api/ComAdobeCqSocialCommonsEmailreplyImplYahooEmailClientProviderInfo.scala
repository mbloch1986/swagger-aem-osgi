package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderInfo._

case class ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties])

object ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderInfoCodecJson: CodecJson[ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderInfo] = CodecJson.derive[ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderInfo]
  implicit val ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderInfoDecoder: EntityDecoder[ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderInfo] = jsonOf[ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderInfo]
  implicit val ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderInfoEncoder: EntityEncoder[ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderInfo] = jsonEncoderOf[ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderInfo]
}
