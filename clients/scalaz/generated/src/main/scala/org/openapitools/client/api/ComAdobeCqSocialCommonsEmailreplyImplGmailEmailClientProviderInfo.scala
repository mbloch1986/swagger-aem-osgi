package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialCommonsEmailreplyImplGmailEmailClientProviderInfo._

case class ComAdobeCqSocialCommonsEmailreplyImplGmailEmailClientProviderInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialCommonsEmailreplyImplGmailEmailClientProviderProperties])

object ComAdobeCqSocialCommonsEmailreplyImplGmailEmailClientProviderInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialCommonsEmailreplyImplGmailEmailClientProviderInfoCodecJson: CodecJson[ComAdobeCqSocialCommonsEmailreplyImplGmailEmailClientProviderInfo] = CodecJson.derive[ComAdobeCqSocialCommonsEmailreplyImplGmailEmailClientProviderInfo]
  implicit val ComAdobeCqSocialCommonsEmailreplyImplGmailEmailClientProviderInfoDecoder: EntityDecoder[ComAdobeCqSocialCommonsEmailreplyImplGmailEmailClientProviderInfo] = jsonOf[ComAdobeCqSocialCommonsEmailreplyImplGmailEmailClientProviderInfo]
  implicit val ComAdobeCqSocialCommonsEmailreplyImplGmailEmailClientProviderInfoEncoder: EntityEncoder[ComAdobeCqSocialCommonsEmailreplyImplGmailEmailClientProviderInfo] = jsonEncoderOf[ComAdobeCqSocialCommonsEmailreplyImplGmailEmailClientProviderInfo]
}