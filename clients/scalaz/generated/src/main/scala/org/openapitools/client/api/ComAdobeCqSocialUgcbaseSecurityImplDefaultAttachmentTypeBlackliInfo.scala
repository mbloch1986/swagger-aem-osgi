package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliInfo._

case class ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties])

object ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliInfoCodecJson: CodecJson[ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliInfo] = CodecJson.derive[ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliInfo]
  implicit val ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliInfoDecoder: EntityDecoder[ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliInfo] = jsonOf[ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliInfo]
  implicit val ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliInfoEncoder: EntityEncoder[ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliInfo] = jsonEncoderOf[ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliInfo]
}