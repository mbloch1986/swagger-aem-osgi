package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties._

case class ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties (
  patternTime: Option[ConfigNodePropertyString],
patternNewline: Option[ConfigNodePropertyString],
patternDayOfMonth: Option[ConfigNodePropertyString],
patternMonth: Option[ConfigNodePropertyString],
patternYear: Option[ConfigNodePropertyString],
patternDate: Option[ConfigNodePropertyString],
patternDateTime: Option[ConfigNodePropertyString],
patternEmail: Option[ConfigNodePropertyString])

object ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesCodecJson: CodecJson[ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties] = CodecJson.derive[ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties]
  implicit val ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesDecoder: EntityDecoder[ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties] = jsonOf[ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties]
  implicit val ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesEncoder: EntityEncoder[ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties] = jsonEncoderOf[ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties]
}
