package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderInfo._

case class ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties])

object ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderInfoCodecJson: CodecJson[ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderInfo] = CodecJson.derive[ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderInfo]
  implicit val ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderInfoDecoder: EntityDecoder[ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderInfo] = jsonOf[ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderInfo]
  implicit val ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderInfoEncoder: EntityEncoder[ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderInfo] = jsonEncoderOf[ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderInfo]
}
