<?php
function menufun_greeting($first_name = '', $last_name = '', $from_first_name='',
    $from_last_name='') {
        return t('Hello @first_name @last_name from @from_first_name @from_last_name',
            array('@first_name' => $first_name, '@last_name' => $last_name, '@from_first_name' =>
                $from_first_name, '@from_last_name' => $from_last_name));
}

function menufun_farewell() {
    return t('Goodbye');
}